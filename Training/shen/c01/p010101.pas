program p010101(input, output);
	var
		a, b, t : integer;

begin
	write('A: ');
	read(a);
	write('B: ');
	read(b);

	t := a;
	a := b;
	b := t;

	writeln('A: ', a);
	writeln('B: ', b);
end.