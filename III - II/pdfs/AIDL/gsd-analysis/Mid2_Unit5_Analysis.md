# Analysis: Unit-V (Convolutional Neural Networks)

## 8-Mark Important Questions

### 1. Explain the components and hyper-parameters of a Convolutional Layer.
**Answer:**
A convolutional layer processes an input volume to produce a new 3D volume of information (feature maps).
**Key Components:**
- **Local Connectivity:** Each neuron is only connected to a small, local region of the preceding layer called the **receptive field**.
- **Parameter Sharing:** Filters (feature detectors) are replicated over the entire area of the input. All neurons in a single feature map share the same weights.
**Hyper-parameters:**
1. **Filter size (spatial extent 'e'):** The width and height of the filter (e.g., 3x3 or 5x5).
2. **Stride ('s'):** The distance between consecutive applications of the filter. A stride of 1 captures all info; larger strides reduce output size.
3. **Zero Padding ('p'):** Adding zeros around the border of the input to control the spatial size of the output (e.g., to keep it the same as the input).
4. **Number of Filters ('k'):** Defines the depth of the output volume.

<button onclick="navigator.clipboard.writeText(`Conv Layer: Processes input via local connectivity (receptive fields) and parameter sharing (shared weights/filters). Hyper-parameters: 1. Filter size (e). 2. Stride (s). 3. Zero-padding (p). 4. Number of filters (k). Output size: W_out = [(W_in - e + 2p)/s] + 1.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 2. Discuss the role of Max Pooling and Batch Normalization in CNNs.
**Answer:**
- **Max Pooling:**
  - **Function:** Slides a window over the feature map and selects the maximum value.
  - **Purpose:** Aggressively reduces dimensionality, making the network computationally efficient.
  - **Benefit:** Provides **local invariance**, meaning the output stays constant even if inputs shift slightly. It also acts as a regularizer to prevent overfitting.
- **Batch Normalization:**
  - **Function:** Normalizes the activations of a layer across a mini-batch of data.
  - **Purpose:** Addresses the problem of "internal covariate shift" during training.
  - **Benefit:** Significantly accelerates the training process, allows for higher learning rates, and acts as a strong regularizer, often improving final accuracy (e.g., from 92.3% to 96.7% on CIFAR-10).

<button onclick="navigator.clipboard.writeText(`Max Pooling: Reduces spatial size, provides local invariance, and prevents overfitting. Batch Normalization: Normalizes activations across batches, accelerates training, enables higher learning rates, and improves overall model accuracy.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 3. Explain Neural Style Transfer and the concept of the Gram Matrix.
**Answer:**
Neural Style Transfer is an application of CNNs where an arbitrary photograph (content image `p`) is rerendered in the style of an artwork (style image `a`).
- **Mechanism:** It uses a pre-trained network (like VGGNet) to extract features. It minimizes an error function that combines content loss and style loss.
- **Content Loss:** Measures the difference in high-level feature activations between the content image and the generated image.
- **Style Loss & Gram Matrix:** Style is captured using a **Gram Matrix**, which represents the correlations between different feature maps in a layer.
  - The Gram matrix `G` captures the texture and feel of the image, irrespective of where features appear.
  - Style loss is the difference between the Gram matrices of the style image and the generated image.
The generated image is updated via backpropagation until it matches both the content of `p` and the style of `a`.

<button onclick="navigator.clipboard.writeText(`Neural Style Transfer combines content of image 'p' with style of image 'a'. Content loss uses VGG feature activations. Style loss uses the Gram Matrix, which captures correlations between feature maps to represent texture/style. Backpropagation optimizes the generated image to minimize both losses.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is a Receptive Field?** The local portion of the previous layer that a specific neuron in a convolutional layer is connected to.
2. **Define Parameter Sharing in CNNs.** The practice of using the same weight matrix (filter) across different spatial positions of the input to detect the same feature everywhere.
3. **What is a Feature Map?** The output of a convolutional filter applied over the input volume, representing the presence of a specific feature.
4. **Define Stride.** The number of pixels by which the filter shifts at each step during the convolution operation.
5. **What is Zero Padding?** Adding layers of zeros around the input image to prevent the spatial dimensions from shrinking too quickly.
6. **Define Local Invariance.** A property of pooling layers where the output remains constant despite small shifts or distortions in the input.
7. **What is the MNIST dataset?** A benchmark dataset of 70,000 small (28x28) grayscale images of handwritten digits (0-9).
8. **Define CIFAR-10.** A dataset of 60,000 small (32x32) color images belonging to 10 different classes (e.g., airplane, dog, truck).
9. **Role of the Softmax layer:** Typically the final layer, it converts the output scores of the network into a probability distribution over the classes.
10. **What is hierarchical representation in CNNs?** The idea that early layers learn simple features (edges), while deeper layers learn complex features (shapes, objects).

<button onclick="navigator.clipboard.writeText(`1. Receptive Field: Neuron's local input region.
2. Parameter Sharing: Using same weights for entire feature map.
3. Feature Map: Filter output volume.
4. Stride: Step size of filter movement.
5. Zero Padding: Padding input with 0s to control output size.
6. Local Invariance: Stability against input shifts.
7. MNIST: Handwritten digit dataset (28x28).
8. CIFAR-10: 10-class color image dataset (32x32).
9. Softmax: Converts scores to probabilities.
10. Hierarchy: Edges -> Curves -> Objects learning.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
