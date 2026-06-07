<style>

*{
    margin:0;
    padding:0;
    box-sizing:border-box;
}

body{
    font-family:Arial,sans-serif;
    min-height:100vh;
    overflow-x:hidden;
    color:white;

    background: linear-gradient(
        -45deg,
        #ff00ff,
        #00ffff,
        #0011ff,
        #ff0080,
        #00ff88
    );

    background-size: 500% 500%;

    animation: cosmicFlow 3s linear infinite;
}

@keyframes cosmicFlow{

    0%{
        background-position:0% 50%;
    }

    25%{
        background-position:50% 100%;
    }

    50%{
        background-position:100% 50%;
    }

    75%{
        background-position:50% 0%;
    }

    100%{
        background-position:0% 50%;
    }
}

body::before{

    content:"";
    position:fixed;
    top:0;
    left:0;

    width:100%;
    height:100%;

    background:
    radial-gradient(circle,#ffffff 1px,transparent 1px);

    background-size:40px 40px;

    opacity:0.3;

    animation: starsMove 20s linear infinite;

    pointer-events:none;
}

@keyframes starsMove{

    from{
        transform:translateY(0px);
    }

    to{
        transform:translateY(-100px);
    }
}

.container{

    max-width:800px;

    margin:60px auto;

    padding:25px;

    border-radius:20px;

    background:rgba(0,0,0,0.4);

    backdrop-filter:blur(12px);

    box-shadow:
    0 0 20px #00ffff,
    0 0 40px #00ffff,
    0 0 80px #00ffff;
}

h1{

    text-shadow:
    0 0 10px #00ffff,
    0 0 20px #00ffff,
    0 0 40px #00ffff;
}

button{

    background:#00ffff;

    color:black;

    font-weight:bold;

    transition:0.3s;

    box-shadow:
    0 0 10px #00ffff,
    0 0 20px #00ffff;
}

button:hover{

    transform:scale(1.05);

    box-shadow:
    0 0 20px #00ffff,
    0 0 40px #00ffff,
    0 0 80px #00ffff;
}

</style>