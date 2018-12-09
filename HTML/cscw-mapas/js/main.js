mapboxgl.accessToken = 'pk.eyJ1IjoiYWxleC1zYWxnYWRvIiwiYSI6ImNqbnc2OHdreTAwMXcza3B0bzdvOGZhZWEifQ.GAqMlYzetVlP7lb8eW7zUw';
var map = new mapboxgl.Map({
    container: 'map',
    style: 'mapbox://styles/mapbox/streets-v10',
        bearing: 0,
        center: [-43.106577,-22.896528],
        zoom: 17,
        speed: 0.8,
        pitch: 0
});

var chapters = {
    'welcome': {
        bearing: 0,
        center: [-43.106577,-22.896528],
        zoom: 17,
        speed: 0.8,
        pitch: 0
    },
    'Meu1': { //Meu1
        bearing: 0,
        center: [-116.177256, 51.425374],
        zoom: 19,
        pitch: 54.00
    },
    'Amigo1': { //Amigo 1
        center: [4.891803, 52.358021],
        bearing: 1.60,
        zoom: 17.89,
        speed: 0.6,
        pitch: 59.00
    },
    'Amigo2': { //Amigo 2
        bearing: 1.00,
        center: [-43.120951, -22.935711],
        zoom: 18,
        speed: 0.6,
        pitch: 60
    },
    'Ending': {
        bearing: -0,
        center: [21.563888, 51.315174],
        zoom: 4,
        speed: 0.8,
        pitch: 24.00
    },
};

// On every scroll event, check which element is on screen
window.onscroll = function() {
    var chapterNames = Object.keys(chapters);
    for (var i = 0; i < chapterNames.length; i++) {
        var chapterName = chapterNames[i];
        if (isElementOnScreen(chapterName)) {
            setActiveChapter(chapterName);
            break;
        }
    }
};

var activeChapterName = '';
function setActiveChapter(chapterName) {
    if (chapterName === activeChapterName) return;
    map.flyTo(chapters[chapterName]);
    document.getElementById(chapterName).setAttribute('class', 'active');
    document.getElementById(activeChapterName).setAttribute('class', '');
    activeChapterName = chapterName;
}

function isElementOnScreen(id) {
    var element = document.getElementById(id);
    var bounds = element.getBoundingClientRect();
    return bounds.top < window.innerHeight && bounds.bottom > 0;
}