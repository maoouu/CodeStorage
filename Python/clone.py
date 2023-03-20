import os

with open(__file__ + ".py", 'w') as copy:
	with open(__file__, 'r') as original:
		copy.write(original.read())
