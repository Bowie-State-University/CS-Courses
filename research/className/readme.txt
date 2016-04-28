#all class names
p: Project = input;
className: output sum[string] of int;

visit(p, visitor {
	# only look at the latest snapshot
	before n: CodeRepository -> {
		snapshot := getsnapshot(n);
		foreach (i: int; def(snapshot[i]))
			visit(snapshot[i]);
		stop;
	}
	before node: Declaration ->
		if (node.kind == TypeKind.CLASS)
			className[node.name] << 1;
});