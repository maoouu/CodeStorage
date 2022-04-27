"""
We need a function that can transform a string into a number. 
What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, 
and every string is a perfectly valid representation of an integral number.

stringToNumber("1234") == 1234
stringToNumber("605" ) == 605
stringToNumber("1405") == 1405
stringToNumber("-7"  ) == -7
"""


def string_to_number(sample: str) -> int:
    return int(sample)


sample = "1234"
output = string_to_number(sample)
print(output)
print(f"Output is: {type(output)}")
