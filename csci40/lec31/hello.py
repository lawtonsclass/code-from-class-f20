# this is a single-line comment!
"""
this is a multi
line
comment!
"""
print("Hello, world!")
# strings can also use single quotes in python
print('Hello, world!')

x = 42
print(x)
x = 'hi mom'
print(x)
# there's no type associated with x

# the following is a function that prints a number plus 1
def printPlus1(x):
    # the body is tabbed over--there are no {}s
    print(x + 1)

printPlus1(42)

l = [1, 2, 3]
for x in l:
    print(x)
