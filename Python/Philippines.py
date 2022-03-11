class City:
    def __init__(self, name, brgy_count, zip_code) -> None:
        self.name = name
        self.brgy_count = brgy_count
        self.zip_code = zip_code
    
    def get_name(self) -> str:
        return self.name
    
    def get_details(self) -> list:
        return [self.name, self.brgy_count, self.zip_code]

class Island:
    def __init__(self, cities) -> None:
        self.cities = cities
    
    # Adds city details in a list "self.cities"
    def add_city(self, new_city) -> None:
        self.cities.append(new_city)
    
    def get_city(self, city_name) -> None:
        for city in self.cities:
            if city_name == City.get_name(city):
                details = City.get_details(city)
                return f"[Details]\nName: {details[0]}\nNumber of Brgy: {details[1]}\nZip Code: {details[2]}"
        return f"No city with name '{city_name}' has been found"
    
    def get_list_of_city_names(self) -> str:
        return [City.get_name(city) for city in self.cities]



# Different ways of initializing an Island object
luzon_cities = [City("Lucena", 42, "4301"), City("Malolos", 51, "3000"),]
luzon = Island(luzon_cities)
visayas = Island([
    City("Cebu", 80, "6000"),
    City("Bacolod", 61, "6100"),
    City("Lapu-lapu", 30, "6015"),
])

print(luzon.get_list_of_city_names())
print(visayas.get_list_of_city_names())

# Adding a City object
luzon.add_city(City("Tayabas", 66, "4327"))
print(luzon.get_list_of_city_names())

# Get City Details
print(luzon.get_city("Lucena"))
# Error message in case an unknown city is being searched
print(luzon.get_city("Paris"))
