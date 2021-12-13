'''
q-1 : Write a program that asks the user to enter a length in centimeters. If the user enters a negative length, 
the program should tell the user that the entry is invalid. Otherwise, theprogram should convert the length 
to inches and print out the result. There are 2.54 centimeters in an inch.
'''
# class myclass:
#     def __init__(self, len):
#         self.len = len
    
#     def checkenconvert(self):
#         if self.len < 0:
#             print("Enter positive length entry invalid")
#         else:
#             print("Length in inches:",self.len/2.54)

# lenincms = float(input("Enter length in cms:"))

# myobj = myclass(lenincms)
# myobj.checkenconvert()

'''
Q-2: Write a program that asks the user to enter a word that
contains the letter a. The program should then print the
following two lines: On the first line should be the part of the
string up to and including the first a, and on the second line
should be the rest of the string.
'''
# class myclass:
#     def __init__(self, word):
#         self.word = word
    
#     def printstr(self):
#         for i in range(len(self.word)):
#             if self.word[i] == 'a':
#                 print(self.word[0:i+1])
#                 print(self.word[i+1:len(self.word)+1])
#                 break

# str = input("Enter string containing a : ")

# myobj = myclass(str)
# myobj.printstr()

'''
q-3: Write a program that asks the user to enter two strings of the
same length. The program should then check to see if the strings
are of the same length. If they are not, the program should print
an appropriate message and exit. If they are of the same length,
the program should alternate the characters of the two strings.
For example, if the user enters abcde and ABCDE the program
should print out AaBbCcDdEe
'''
# class myclass:
#     def __init__(self, str1, str2):
#         self.str1 = str1
#         self.str2 = str2
    
#     def printres(self):
#         res = ""
#         if len(self.str2) != len(self.str1):
#             print("Two strings are of unequal lengths")
#         else:
#             for i in range(len(self.str1)):
#                 res = res + self.str1[i] + self.str2[i]
#             print(res)


# st1 = input("Enter string 1:")
# st2 = input("Enter string 2:")

# myobj = myclass(st1, st2)
# myobj.printres()

'''
q-4: 
'''