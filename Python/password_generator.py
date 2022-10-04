from random import random
import string
import random

def choose_between(letters,u,l,d,p):

    pass

def raw_data():
    letters = string.ascii_letters
    upper_case = string.ascii_uppercase
    lower_case = string.ascii_lowercase
    digits = string.digits
    punctuation = string.punctuation
    hex = string.hexdigits
    passwd_size = random.randint(10,20)

    passwd = "".join(random.choices(letters+upper_case+lower_case+digits+hex+punctuation,k=passwd_size))
    print(passwd)

    

if __name__=="__main__":
    raw_data();
