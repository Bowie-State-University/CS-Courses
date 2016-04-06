function [RandString Freq] = RandStringProducer(VecNumbers, TheoFreq, StringLength)
%[RandString Freq] = RandStringProducer(VecNumbers TheoFreq,StringLength)
%Inputs:  VecNumbers = a vector of integers
% TheoFreq = a corresponding vector of theoretical frequences, so this
% vector has the same length as VecNumbers, and its components add to 1
% StringLength = a positive integer
%Outputs  RandString = a vector of StringLength integers randomly sampled
%from VecNumbers according to TheoFreq
% Freq = the actual frequencies in VecNumbers

FreqCount = zeros(size(VecNumbers)); %initialize Frequency Counting Vector
for i = 1:StringLength
    x = rand;
    cumul = TheoFreq(1);
    index = 1;
    while x > cumul
        index = index + 1;
        cumul = cumul + TheoFreq(index);
    end
    RandString(i) = VecNumbers(index);
    FreqCount(index) = FreqCount(index) + 1;
end
Freq = FreqCount/sum(FreqCount);



