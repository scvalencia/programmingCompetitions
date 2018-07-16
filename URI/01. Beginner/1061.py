import datetime

def parse_input():
    
    first_day = raw_input()
    first_day_hour = raw_input()

    second_day = raw_input()
    second_day_hour = raw_input()

    first_day = first_day.split(' ')
    first_day = int(first_day[-1])

    first_day_hour = map(lambda x : int(x.strip()), first_day_hour.split(':'))

    second_day = second_day.split(' ')
    second_day = int(second_day[-1])

    second_day_hour = map(lambda x : int(x.strip()), second_day_hour.split(':'))

    start_time = datetime.datetime(2018, 4, first_day, first_day_hour[0], first_day_hour[1], first_day_hour[2])
    end_time = datetime.datetime(2018, 4, second_day, second_day_hour[0], second_day_hour[1], second_day_hour[2])

    return start_time, end_time

start_time, end_time = parse_input()

delta = end_time - start_time

days, seconds = delta.days, delta.seconds

hours = seconds // 3600
minutes = (seconds % 3600) // 60
seconds = seconds % 60

print days, 'dia(s)'
print hours, 'hora(s)'
print minutes, 'minuto(s)'
print seconds, 'segundo(s)'