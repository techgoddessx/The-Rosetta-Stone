hand = open('romeo.txt')  # Opens the file 'romeo.txt' and returns a file handle

for line in hand:  # Iterates through each line in the file
    print(line.strip().upper())  # Strips leading and trailing whitespace and converts the line to uppercase, then prints it

