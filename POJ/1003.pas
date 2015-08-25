program p1003(input, output);
	var
		stair, ans : real;
		count, i : integer;
begin
	stair := 2.0;
	while stair <> 0.0 do begin
		read(stair);
		ans := 0.0;
		i := 1;
		while ans < stair do begin
			ans := ans + (1 / i);
			i := i + 1;
		end;
		writeln(i, ' card(s)');
	end;
end.