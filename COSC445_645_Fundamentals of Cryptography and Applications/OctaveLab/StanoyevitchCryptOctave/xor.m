function OutVec = xor(VecA, VecB)
% OutVec = xor(VecA, VecB)
% Program for xor in FreeMat
% This function is a compiled function in MATLAB
Vec2 = VecA & VecB;
Vec3 = VecA | VecB;
OutVec = ~Vec2 & Vec3;
