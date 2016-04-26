You can use split command example

split -l N /path-to-file
where N is the maxium number of lines that could be in a file.

it will split the file into smaller files each with N number of lines.

Use man split for more info

//split -l 100000 varTypeNames_medium_all.txt



#only method names
p: Project = input;


methodNames: output  sum[string][string] of int;


visit(p, visitor {
	# only look at the latest snapshot
	before n: CodeRepository -> {
		snapshot := getsnapshot(n);
		foreach (i: int; def(snapshot[i]))
			visit(snapshot[i]);
		stop;
	}


	 before node: Method -> {
    	methodNames[p.id][node.name]<<1;
		stop;
	}
});