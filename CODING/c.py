'''try:
    print(x)
finally:
    print("how are you")'''

'''try:
    print(x)
except:
    print("how are you")'''

'''try:
    x=100
    y="hello"+x
except(NameError,ValueError)as error:
    print(error)
else:
    print(y)'''


'''try:
    a=int(input())
    if(a>10):
        print(a)
    else:
        try:
            b=int(input())
            if(b>5):
                print(b)
            else:
                print("no more chance")
        except:
                print(f"exception raised for value of b")
except:
    print(f"exception raised for value a")'''

'''def abc(x):
    print("hello"+x)
try:
    n=input()
    abc(n)
except ValueError as a:
    print (a)
except TypeError as b:
    print(b)
except NameError as c:
    print(c)
else:
    print(n)'''


def abc(x):
    print(45+x) 
try:
    n = input()
    abc(n) 
except ValueError as a:
    print(f"1 - {a}") 
except TypeError as b:
    print(f"2 - {b}") 
except NameError as c:
    print(f"3 - {c}") 
else:
    print(n)


'''a = [1,2,3,4,5]
try:
    print(a()) 
except ValueError:
    print("This is exception of some kind") 
else:
    print(a)'''