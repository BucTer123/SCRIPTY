-- Создание таблицы
CREATE TABLE my_table (
    id INT,
    name VARCHAR(255)
);

-- Создание пользователя
CREATE USER 'Russia'@'localhost' IDENTIFIED BY 'your_password';

-- Дать пользователю права на таблицу
GRANT ALL PRIVILEGES ON my_table TO 'Russia'@'localhost';

-- Вставка нескольких записей
INSERT INTO my_table (id, name) VALUES
(1, 'Adam'),
(2, 'David'),
(3, 'alah'),
(4, 'alah_pidoras'),
(5, 'alabuga');

-- Выбор всех данных
SELECT * FROM my_table;
