def age_majority(country):
    if country == 'Indonesia:':
        return 15
    elif country == 'Cuba':
        return 16
    elif country == 'Kyrgyzstan':
        return 16
    elif country == 'Vietnam':
        return 16
    elif country == 'Tajikistan':
        return 17
    elif country == 'Austria':
        return 18
    elif country == 'Spain':
        return 18
    elif country == 'China':
        return 18
    elif country == 'South Korea':
        return 19
    elif country == 'Japan':
        return 20
    elif country == 'Singapore:':
        return 21

i = 0
while i < 10:
  input_country = input('Input country: ')
  input_age =  int(input('Input age: '))
  age = age_majority(input_country)
  if input_age > age:
      print('You are major')
  else:
      print('You are minor')

  i = i + 1
