import sys
args = sys.argv[1:]
for word in args:
    freaky_word = ""
    for letter in word:
        if 65 <= ord(letter) < 65+26:
            freaky_word += chr(ord(letter) + (0x1d4d0 - 65))
        elif 97 <= ord(letter) < 97+26:
            freaky_word += chr(ord(letter) + (0x1d4ea - 97))
        else:
            freaky_word += letter
    print(freaky_word, end=" ")
print()
        
