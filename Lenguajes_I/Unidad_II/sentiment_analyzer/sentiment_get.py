import requests
import json
# import related models here
from requests.auth import HTTPBasicAuth
from dotenv import load_dotenv
import os
load_dotenv()

api_key = os.getenv('api_key')

#print(api_key)
print("Resultado de la cosulta a NLU")
print("-----------------------------")

def get_request(url, **kwargs):
    print(kwargs)

    #print("GET from {} ".format(url))
    try:
        # Call get method of requests library with URL and parameters
        if api_key:
            response = requests.get(url, params=kwargs, headers={
                'Content-Type': 'application/json'}, auth=HTTPBasicAuth('apikey', api_key))
        else:
            response = requests.get(url, params=kwargs, headers={
                                    'Content-Type': 'application/json'})
    except:
        # If any error occurs
        print("Network exception occurred")

    # Retrieve HTTP response status code and parse response data from JSON to Python dictionary
    status_code = response.status_code
    #print("With status {} ".format(status_code))
    json_data = json.loads(response.text)
    return json_data


def analyze_review_sentiments(text):
    # Call get_request with a URL parameter
    json_result = get_request(
        "https://api.us-south.natural-language-understanding.watson.cloud.ibm.com/instances/67e6e456-38ad-4522-bc0d-e80e28e70226/v1/analyze?version=2020-08-01", text=text, features="sentiment")

    # Get the returned sentiment label such as Positive or Negative
    if json_result:
        sentiment = json_result["sentiment"]["document"]["label"]
        # print(sentiment)
        return sentiment
    else:

        return "Neutral"
        # print(Neutral)


def write_in_text(text):
    with open("sentimiento.txt", "r+") as f:
        f.write(text)


def get_text():
    with open("texto_a_analizar.txt", "r+") as f:
        text = f.read()
        return text


texto = get_text()

resultado = analyze_review_sentiments(texto)
# print(resultado)
write_in_text(resultado)
