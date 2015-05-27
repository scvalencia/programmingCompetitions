program UVA11577(input, output);
	var
		ch : Char;
		TC, i, max : Integer;
		line : String;
		letters : array['a' .. 'z'] of Integer;

begin
	readln(TC);
	
	while TC > 0 do begin
		readln(line);
		max := -1;
		for ch := 'a' to 'z' do
			letters[ch] := 0; 
		for i := 1 to length(line) do begin
			ch := lowercase(line[i]);
			if (ch <> ' ') and (ch in ['a' .. 'z']) then begin
				letters[ch] := letters[ch] + 1;
				if(letters[ch] > max) then
					max := letters[ch];				
			end;				
		end;
		for ch := 'a' to 'z' do
			if letters[ch] = max then
				write(ch);

		writeln();			
		TC := TC - 1;
	end;
end.