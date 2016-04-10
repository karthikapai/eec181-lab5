func(790, testData);


% building the actual network
clear all;
close all;
clc; 

load testSet.mat;
load NN.mat;

[a,b] = size(finalW1L1);
[c,d] = size(finalW1L2); %% WEIGHTS (first two)
[e,f] = size(finalB1L1);
[g,h] = size(finalB1L2); %% BIAS THAT NEEDS TO BE ADDED TO FIRST 2

[i,j] = size(finalSoftmaxTheta); %third layer weights

image = func(500, testData); %input a single number <-- FUNCTION CALL
imshow(image);
arrayf = reshape(image, 784,1);

%  FIRST LAYER 
firstlayer = zeros(200,1);
nodeL1 = 0;
product = 0;

for imageindex = 1:784 
    for weightL1 = 1:a
        %for weights1 = 1:a
            tempimg = arrayf(imageindex);
            tempweights = finalW1L1(weightL1,imageindex);
            product = tempimg * tempweights;
            
            %%productarray = reshape(productarray, 200*784, 1);
            nodeL1 = nodeL1 + product;
            firstlayer(weightL1) = nodeL1;
    end
   % firstlayer(weightL1) = nodeL1;
end

firstlayer = firstlayer + finalB1L1;

firstlayer = 1./(1+exp(-firstlayer));

%SECOND LAYER 

secondlayer = zeros(200,1);
nodeL2 = 0;
for weightL2 = 1: c
    for L1nodeindex = 1: a
        tempimg = firstlayer(L1nodeindex);
        tempweights = finalW1L2(weightL2, L1nodeindex);
        nodeL2 = nodeL2 + (tempimg * tempweights);
    end
    secondlayer(weightL2) = nodeL2;
end
secondlayer = secondlayer + finalB1L2; 
secondlayer = 1./(1+exp(-secondlayer));
% 

% THIRD LAYER

thirdlayer = zeros(10,1);
nodeL3 = 0;
for weightL3 = 1: i
    for L2nodeindex = 1: c
        tempimg = secondlayer(L2nodeindex);
        tempweights = finalSoftmaxTheta(weightL3, L2nodeindex);
        nodeL3 = nodeL3 + (tempimg + tempweights);
    end
    thirdlayer(weightL3) = nodeL3;
end
thirdlayer = 1./(1+exp(-thirdlayer));


       



correct = 0;

for i = 1:10000
    if testLabels(i, 1) == solved(i,1)
        correct = correct + 1;
    end
end

accuracy = correct/10000



    
    
    