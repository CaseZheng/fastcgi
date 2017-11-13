# Asynchronous Fastcgi

`mucgi` is a async fastcgi using Muduo Network Library.  
Use Some Cgicc Files to parse http request.  
Modify the [BackendProc Class](backend.cpp) then You can pass the http request to  back-end service.

---

## Requirements
    Need Boost C++ Library  

## Install
```sh
yum install scons -y
scons
```

__Or run:__ 
```sh
sh make.sh
```

## Usage
```sh
nohup ./mcgi [PORT] [THREAD_NUM] &
```

__Linux Version > 3.9, support for the SO_REUSEPORT socket option. We can add process on runtime.__

```sh
nohup ./mcgi 6888 10 &
nohup ./mcgi 6888 10 & 
nohup ./mcgi 6888 10 &
nohup ./mcgi 6888 10 &
...
```
> Test on Centos 6/7
