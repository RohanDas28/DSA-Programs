stopwords = ['to', 'a', 'for', 'by', 'an', 'am', 'the', 'so', 'it', 'and', 'The']
sent = "The water earth and air are vital"
new = sent.split()
print(new)
acro = ''
for word in new:
    if word not in stopwords:
        acro = acro + str.upper(word[:2]) + "." + " "
acro = acro[0:-2]
print(acro)
