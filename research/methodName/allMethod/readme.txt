#only method names
p: Project = input;


methodNames: output  sum[string] of int;


visit(p, visitor {
	# only look at the latest snapshot
	before n: CodeRepository -> {
		snapshot := getsnapshot(n);
		foreach (i: int; def(snapshot[i]))
			visit(snapshot[i]);
		stop;
	}


	 before node: Method -> {
    	methodNames[node.name]<<1;
		stop;
	}
});