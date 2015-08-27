program p010108(input, output);
	var
		n, fct : integer;

begin
	write('n: ');
	read(n);

	fct := 1;
	while n > 0 do begin
		fct := fct * n;
		n := n - 1;
	end;

	writeln('n! ', fct);
end.