# Drag N' Move

When you need to move GUI objects on-screen for a custom tool or other application.

## Variables

```c++
int x,y; //position
bool isSelected;
//variables used to define the selectable bounding box 
```
Note: the

## Functions

```c++
void draw();
void mouseDragged(int x, int y);
bool mousePressed(int x, int y);
void mouseReleased();
```

### draw()
Your implementation to draw your object(s).

### mousePressed(int x, int y)
Sets `isSelected` to `true` if the mouse cursor position (using `x` and `y`) is within the selectable bounding box.

### mouseDragged(int x, int y)
Updates the object's position if `isSelected` is `true` with the current mouse position (`x` and `y`).

### mouseReleased()
Sets `isSelected` to `false`

## Helpful Tips

* adding a `isHover` function to along with graphics to assist the user what object they will select (like adding a shadow or highlight)
