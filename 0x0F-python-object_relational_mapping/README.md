# 0x0F-python-object_relational_mapping

## Overview

Welcome to the 0x0F-python-object_relational_mapping repository.

This collection of Python scripts and programs is dedicated to Object-Relational Mapping (ORM) in Python. The scripts demonstrate the interaction between Python and relational databases using ORM concepts.

## List of Scripts

1. **0-select_states.py**
   - A script that lists all states from the database `hbtn_0e_0_usa`.

2. **1-filter_states.py**
   - A script that lists all states with a name starting with 'N' from the database `hbtn_0e_0_usa`.

3. **2-my_filter_states.py**
   - A script that takes in an argument and lists all states with the provided name from the database `hbtn_0e_0_usa`.

4. **3-my_safe_filter_states.py**
   - A script that takes in an argument and lists all states with the provided name, safe from SQL injection, from the database `hbtn_0e_0_usa`.

5. **4-cities_by_state.py**
   - A script that lists all cities from the database `hbtn_0e_4_usa`.

6. **5-filter_cities.py**
   - A script that takes in the name of a state and lists all cities of that state from the database `hbtn_0e_4_usa`.

7. **model_state.py**
   - The Python class definition of a State with SQLAlchemy.

8. **7-model_state_fetch_all.py**
   - A script that lists all State objects from the database `hbtn_0e_6_usa`.

9. **8-model_state_fetch_first.py**
   - A script that prints the first State object from the database `hbtn_0e_6_usa`.

10. **9-model_state_filter_a.py**
    - A script that lists all State objects that contain the letter 'a' from the database `hbtn_0e_6_usa`.

## How to Use

Each script can be executed independently. To run a script, use the following command in your terminal:

```bash
python script_name.py
