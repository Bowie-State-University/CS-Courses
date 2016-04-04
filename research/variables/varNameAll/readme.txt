//only names
p: Project = input;


variableNames: output  sum[string] of int;


visit(p, visitor {
	# only look at the latest snapshot
	before n: CodeRepository -> {
		snapshot := getsnapshot(n);
		foreach (i: int; def(snapshot[i]))
			visit(snapshot[i]);
		stop;
	}


	 before node: Variable -> {
		visit(node.variable_type);
        	variableNames[node.name]<<1;
		stop;
	}
});