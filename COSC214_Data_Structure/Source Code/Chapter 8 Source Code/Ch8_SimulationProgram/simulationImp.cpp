

#include <iostream>
#include <string>
#include <cstdlib>

#include "Simulation.h"
#include "queueAsArray.h"

using namespace std;
 

//*************** customerType ************

void customerType::setCustomerInfo(int cN, int arrvTime, 
                                   int wTime, int tTime)
{
    customerNumber = cN;
    arrivalTime = arrvTime;
    waitingTime = wTime;
    transactionTime = tTime;
}

customerType::customerType(int customerN, int arrvTime, 
                           int wTime, int tTime)
{
    setCustomerInfo(customerN, arrvTime, wTime, tTime);
}


int customerType::getWaitingTime() const
{
    return waitingTime;
}

void customerType::incrementWaitingTime()
{
    waitingTime++;
}

void customerType::setWaitingTime(int time)
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
}

int customerType::getArrivalTime() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}

int customerType::getTransactionTime() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}

int customerType::getCustomerNumber() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}
//**************** serverType **********

serverType::serverType()
{
    status = "free";
    transactionTime = 0;
}

bool serverType::isFree() const
{
    return (status == "free");
}

void serverType::setBusy()
{
    status = "busy";
}

void serverType::setFree()
{
    status = "free";
}

void serverType::setTransactionTime(int t)
{
    transactionTime = t;
}

void serverType::setTransactionTime()
{
    int time;

    time = currentCustomer.getTransactionTime();

    transactionTime = time;
}

void serverType::decreaseTransactionTime()
{
    transactionTime--;
}

int serverType::getRemainingTransactionTime() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}

void serverType::setCurrentCustomer(customerType cCustomer)
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
}

int serverType::getCurrentCustomerNumber() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}

int serverType::getCurrentCustomerArrivalTime() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}

int serverType::getCurrentCustomerWaitingTime() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}

int serverType::getCurrentCustomerTransactionTime() const
{
    cout << "See Programming Exercise 8 at the end of this chapter." << endl;
    return 0;
}


//************** serverListType ***********

serverListType::serverListType(int num)
{
    numOfServers = num;
    servers = new serverType[num];
}

serverListType::~serverListType()
{
    delete [] servers;
}

int serverListType::getFreeServerID() const
{
    int serverID = -1;

    for (int i = 0; i < numOfServers; i++)
        if (servers[i].isFree())
        {
            serverID = i;
            break;
        }

    return serverID;
}

int serverListType::getNumberOfBusyServers() const
{
    int busyServers = 0;

    for (int i = 0; i < numOfServers; i++)
        if (!servers[i].isFree())
            busyServers++;

    return busyServers;
}

void serverListType::setServerBusy(int serverID, 
                                   customerType cCustomer, 
                                   int tTime)
{
    servers[serverID].setBusy();
    servers[serverID].setTransactionTime(tTime);
    servers[serverID].setCurrentCustomer(cCustomer);
}

void serverListType::setServerBusy(int serverID, 
                                   customerType cCustomer)
{
    int time;

    time = cCustomer.getTransactionTime();

    servers[serverID].setBusy();
    servers[serverID].setTransactionTime(time);
    servers[serverID].setCurrentCustomer(cCustomer);
}

void serverListType::updateServers(ostream& outF)
{
   for (int i = 0; i < numOfServers; i++)
       if (!servers[i].isFree())
       {
          servers[i].decreaseTransactionTime();

          if (servers[i].getRemainingTransactionTime() == 0)
          {
              outF << "From server number " << (i + 1) 
                   << " customer number "
                   << servers[i].getCurrentCustomerNumber()
                   << "\n     departed at clock unit "
                   << servers[i].getCurrentCustomerArrivalTime()
                   + servers[i].getCurrentCustomerWaitingTime() 
                   + servers[i].getCurrentCustomerTransactionTime()
                   << endl;
              servers[i].setFree();
          }
       }
}


//*************** waitQueue ************


waitingCustomerQueueType::waitingCustomerQueueType(int size)
                          :queueType<customerType>(size)
{
}

void waitingCustomerQueueType::updateWaitingQueue()
{
    customerType cust;

    cust.setWaitingTime(-1);  
    int wTime = 0;
	  
	addQueue(cust);

    while (wTime != -1)
    {
        cust = front();
        deleteQueue();

        wTime = cust.getWaitingTime();
        if (wTime == -1)
            break;
        cust.incrementWaitingTime();
        addQueue(cust);
	}
}
