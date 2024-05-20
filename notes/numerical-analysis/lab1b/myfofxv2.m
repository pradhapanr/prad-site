
function fx =  myfofxv2(x)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
if -10^(-6) < x & x < 10^(-6)
    fx = lab1bP2v2(x,8);
else
    fx = myfxv2(x);
end
end