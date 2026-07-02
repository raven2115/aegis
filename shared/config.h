#ifndef CONFIG_H
#define CONFIG_H

#define PATH_LENGTH 256 //path_length = 256 (dla wszystkich co maja ten plik w include)
#define PATH_LOGS_FOLDER "/logs" //sciezka do folderu logs
#define QUEUE_MAX_SIZE 128 //maksymalny rozmiar kolejki eventow
#define MAX_SUBSCRIBERS_COUNT 32 //maksymalna liczba modulow podpietych pod event bus
#define CURRENT_SUBSCRIBER_COUNT 1 //obecna ilosc subskrybentow event busa

#endif /* CONFIG_H */