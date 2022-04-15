f = open('abc.txt', 'w')

f.write("hello how are you")

f.close()

f = open('abc.txt', 'r+')

f.write("abcd")

f.close()