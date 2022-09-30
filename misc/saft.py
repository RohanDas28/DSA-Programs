stopwords = ['to', 'a', 'for', 'by', 'an', 'am', 'the', 'so', 'it', 'and', "The"]
org = "The organization for health, safety, and education"
new=org.split()
acro=''
for word in new:
    if word not in stopwords:
        acro=acro + str.upper(word[0])
print(acro)
