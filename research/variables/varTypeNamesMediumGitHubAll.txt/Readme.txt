You can use split command example

split -l N /path-to-file
where N is the maxium number of lines that could be in a file.

it will split the file into smaller files each with N number of lines.

Use man split for more info

//split -l 100000 varTypeNames_medium_all.txt

//code to generate the file
//http://boa.cs.iastate.edu/docs/dsl-types.php#Type
p: Project = input;


variableNames: output  sum[string][string] of int;
varTypeName: string;

visit(p, visitor {
	# only look at the latest snapshot
	before n: CodeRepository -> {
		snapshot := getsnapshot(n);
		foreach (i: int; def(snapshot[i]))
			visit(snapshot[i]);
		stop;
	}

	 before node: Type-> {
        varTypeName=node.name;
      	stop;
	}

	 before node: Variable -> {
		visit(node.variable_type);
        	variableNames[varTypeName][node.name]<<1;
		stop;
	}
});