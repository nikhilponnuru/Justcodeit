#using google geocode api
import httplib2

import json
def getGeoLocation(inputString):
	exact_string=inputString.replace(" ","+")
	google_api_id="enterkey"
	url=('https://maps.googleapis.com/maps/api/geocode/json?address=%s&key=%s'% (exact_string,google_api_id))
	h=httplib2.Http()
	response,content = h.request(url,'GET')
	json_content=json.loads(content)
	return json_content
	
	
result=getGeoLocation("India,Hyderabad")
result1=getGeoLocation("India,Delhi")
print(result['results'])
print(result1['results'])
