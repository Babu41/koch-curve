to setup
  clear-all
  set-default-shape turtles "segment"
  create-turtles 1
    [ setxy min-pxcor       ;; start turtle in lower left corner
            min-pycor + 10
      set heading 90                ;; facing right
      set color white
      set size (world-width * 2) ]
  reset-ticks
end

to step
  ask turtles [ iterate ]
  tick
end

to iterate
  set size size / 3
  hatch 1
  fd size / 2
  lt 90
  hatch 1
  fd size / 2
  rt 90
  hatch 1
  fd size / 2
  rt 90
  hatch 1
  fd size / 2
  lt 90
end
