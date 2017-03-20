program p010110(input, output);
	var
		n, a, b, c, d>  : integer;

begin
	write('n: ');
	read(n);

	a0 := 0;
	a1 := 1;
	i := 0;
	while i < n do begin
		a2 := a0;
		a0 := a1;
		a1 := a1 + a2;
		i := i + 1;
	end;

	writeln('an ', a0);
end.