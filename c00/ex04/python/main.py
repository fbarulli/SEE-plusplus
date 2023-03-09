one = 0 
two = 0
three = 0
''' 
while (one <=7):
	
	while (two <= 8):
		
		while (three <= 9):
			if (one == 7 & two == 8 & three == 9):
				print(one, two, three, ", ")
			else:
				print(one,two,three)
				
		  three += 1
  two = one + 1	
 one += 1
 if (one == 7 & two == 8 & three == 9):
				print(one, two, three, end = ' ')
	else:
				print(one,two,three)	
'''


while (one <= 7):
	two = one + 1
	while (two <= 8):
		three = two + 1
		while (three <= 9):
			if ((one == 7) & (two == 8) & (three == 9)):
				print(f'{one}{two}{three}')
			else:
				print(f"{one}{two}{three}")
			
			three += 1
		two = two + 1
		three = two + 1
	one = 1 + one