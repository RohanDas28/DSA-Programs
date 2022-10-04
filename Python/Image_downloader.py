import requests
from bs4 import BeautifulSoup

def download_image(url):
    request = requests.get(url,stream=True)
    request.raise_for_status()
    with open("image.png","wb") as img:
        for chunk in request.iter_content(chunk_size=5000):
            with open("image_hex.txt","wb") as img_b:
                # img_b.write("✨ Chunk receaved")
                img_b.write(chunk)
            print("✨ Chunk receaved")
            print(chunk)
            img.write(chunk)


if __name__=="__main__":
    print("Image Download... ")
    url = 'https://i.picsum.photos/id/822/200/200.jpg?hmac=pXgRn-rbZIan3GYBv9xCVsdyt_Kzq5Q_d0AbLnzeT3k'
    download_image(url)
