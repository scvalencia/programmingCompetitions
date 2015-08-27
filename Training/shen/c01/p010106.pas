program p010106(input, output);
	var
		a, b, c, k, t : integer;

begin
	write('a: ');
	read(a);
	write('b: ');
	read(b);

	c := a; k := 0; t := 0;

	while k <> b do begin
		t := k;
		k := t + 1;
		c := a + k;
	end;

	writeln('a + b: ', c);
end.