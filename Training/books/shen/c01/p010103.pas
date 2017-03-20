program p010103(input, output);
	var
		a, n, ans, i : integer;

begin
	write('a: ');
	read(a);
	write('n: ');
	read(n);

	i := 1;
	ans := a;

	while i <> n do begin
		ans := ans * a;
		i := i + 1;
	end;

	writeln('a^n: ', ans);
end.