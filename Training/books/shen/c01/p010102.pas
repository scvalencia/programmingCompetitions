program p010101(input, output);
	var
		a, b : integer;

begin
	write('A: ');
	read(a);
	write('B: ');
	read(b);

	a := a + b;
	b := a - b;
	a := a - b;

	writeln('A: ', a);
	writeln('B: ', b);
end.