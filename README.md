# Start

Reference to https://www.dotcpp.com/course/cpp/

# How to use VSCode to run c++ code

You will use c++ compiler with Clang++ or g++. Here I used Clang++.

##### launch.json configuration

```json
{
  // Use IntelliSense to learn about possible attributes.
  // Hover to view descriptions of existing attributes.
  // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
  "version": "0.2.0",
  "configurations": [
    {
      "name": "(lldb) Launch",
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/virtual~.out",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "lldb",
      "preLaunchTask": "clang++ build active file"
    }
  ]
}
```

##### tasks.json configuration

Use shortcut keys: shift + command + B

```json
{
  // See https://go.microsoft.com/fwlink/?LinkId=733558
  // for the documentation about the tasks.json format
  "version": "2.0.0",
  "tasks": [
    {
      "label": "clang++ build active file",
      "type": "shell",
      "command": "/usr/bin/clang++",
      "args": [
        "-g",
        "${workspaceRoot}/virtual~.cpp", // 这里是你自己的源文件的名字
        "-o",
        "${workspaceRoot}/virtual~.out"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ]
}
```