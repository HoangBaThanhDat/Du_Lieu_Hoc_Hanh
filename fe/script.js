 let slides = document.querySelectorAll('.slider img'); 
 let currentSlide = 0; 
 //let slideInterval = setInterval(nextSlide, 2000);
genButton();

 function genButton(){
    let divslideButton = Document.getElementById('slideButton');

    for(let i=0; i<slides.length; i++){
        let btn = "<button onclick='seletImg("+i+")'>"+i+"</button>"
        divslideButton.innerHTML += btn;
    }
 }
 function seletImg(index){
    slides[currentSlide].className=' ';
    currentSlide = index;
    slides[currentSlide].className = 'active'
 }
 function nextSlide() {
     slides[currentSlide].className = '';
     currentSlide = (currentSlide + 1) % slides.length;
     slides[currentSlide].className = 'active';
 }

document.getElementById('previous').addEventListener('click', previousSlide);
document.getElementById('next').addEventListener('click', nextSlide);

function previousSlide() {
    slides[currentSlide].className = '';
    currentSlide--;
    if (currentSlide < 0) {
        currentSlide = slides.length - 1;
    }
    slides[currentSlide].className = 'active';
}
