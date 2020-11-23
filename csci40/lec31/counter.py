class Counter:
    # constructor is called __init__
    # every method takes an explicit "self" parameter first
    def __init__(self, count=0):
        self.count = count # makes the member var right here!

    def inc(self):
        self.count += 1

    def getCount(self):
        return self.count

# notice that at the time of use for each method, self gets passed for
# you
c = Counter()
c.inc()
c.inc()
c.inc()
print(c.getCount())
c2 = Counter(42)
print(c2.getCount())
