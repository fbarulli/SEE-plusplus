if __name__ == '__main__':

	zero = 0 
	one = 0
	while (zero <= 98):
		one = zero + 1
		while (one <= 99):
			
			if ((zero == 98) and one == 99):
				print(f"{zero} {one}")
				
			elif ((zero <= 9) and (one <= 9)):
				print(f"0{zero} 0{one},")
				
			elif (one <= 9):
				print(f"{zero} 0{one},")
				
			elif (zero <= 9):
				print(f"0{zero} {one},")
				
			else: print(f"{zero} {one},")
			one += 1
			
			
		zero += 1
			