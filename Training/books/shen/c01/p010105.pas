program p010105(input, output);
	var
		a, b, ans : integer;

begin
	write('a: ');
	read(a);
	write('b: ');
	read(b);

	ans := 0;

	while b > 0 do begin
		ans := ans + a;
		b := b - 1;
	end;

	writeln('a * b: ', ans);
end.