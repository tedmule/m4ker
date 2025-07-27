# m4ker

# Common G-code
```
# 手动挤出耗材
G91
G1 E50 F60
```


# Extruder rotation_distance
滚花螺栓(hobbed bolt)
直径: 8mm

36圆饼电机
10齿



initial_mark_distance: 85mm


requested_extrude_distance: 50mm


actual_extrude_distance = <initial_mark_distance> - <subsequent_mark_distance>
85-40 = 45


# Bed leveling
[20, 20]: check,
[130, 20]: 
[20, 130]: 
[130, 130]: 