# string length.
# keyword used :len()
x = "Hare Krishna"
print(len(x)) # Length = size+null-charater(\0)

# string strip:to remove the white-space from the begenning and end
# keyword used strip
x = " Hare Krishna "
print(x.strip()) #Hare Krishna

# for string Upper case
# keyword used : upper
x = "Hare Krishna"#HARE Krishna
print(x.upper()) #here the spelling of upper is in lower case

# for string lower case
# keyword used: lower
x = "HARE KRISHNA"
print(x.lower()) #hare krishna

#for spliting the string in sub-string when it encounters ","
# keyword used :split 
x = "Ha,re , Kris,hn,a"
print(x.split(",")) #['Ha', 're ', ' Kris', 'hn', 'a'] 
# note: if the number of comma is n then the elements seperated will be n+1

#for replace  a letter in a string with another letter
#keyword used:replace
x = "Hare Krisha"
print(x.replace("H" , "G")) # Gare Krishna

#for check the phrase in a string
#keyword used : in and not in
x = "My name is vivaan"
y = "My" in x
z = "Z" not in x
print(y) # True
print(z) # True

