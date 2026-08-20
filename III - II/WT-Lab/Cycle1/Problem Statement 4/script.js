// Function to detect device type
function detectDevice() {
    var deviceTypeElement = document.getElementById('deviceType');
    var featureList = document.getElementById('featureList');

    if (window.innerWidth < 768) {
        deviceTypeElement.textContent = "You are using a mobile device.";
        // Example mobile features
        featureList.innerHTML = `
            <div class="feature">Mobile Feature 1</div>
            <div class="feature">Mobile Feature 2</div>
        `;
    } else if (window.innerWidth < 1024) {
        deviceTypeElement.textContent = "You are using a tablet.";
        // Example tablet features
        featureList.innerHTML = `
            <div class="feature">Tablet Feature 1</div>
            <div class="feature">Tablet Feature 2</div>
            <div class="feature">Tablet Feature 3</div>
        `;
    } else {
        deviceTypeElement.textContent = "You are using a desktop.";
        // Example desktop features
        featureList.innerHTML = `
            <div class="feature">Desktop Feature 1</div>
            <div class="feature">Desktop Feature 2</div>
            <div class="feature">Desktop Feature 3</div>
            <div class="feature">Desktop Feature 4</div>
        `;
    }
}

// Detect device type on load and resize
window.onload = detectDevice;
window.onresize = detectDevice;
