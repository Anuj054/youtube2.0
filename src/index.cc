html,
body {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

a {
  text-decoration: none;
  color: black;
}

::-webkit-scrollbar {
  width: 0px;
  height: 5px;
}

::-webkit-scrollbar-thumb {
  background-color: rgb(114, 113, 113);
  border-radius: 10px;
  height: 200px;
}

::-webkit-scrollbar-track {
  background-color: transparent;
}

.category-btn:hover {
  background-color: #FC1503 !important;
  color: white !important;
}

.category-btn:hover span{
  color: white !important;
}

.react-player {
  height: 77vh !important;
  width: 100% !important;
}

.search-bar{
  border:none;
  outline:none;
  width:350px;
}

.category-btn{
  font-weight: bold !important;
  text-transform: capitalize;
  display: flex;
  align-items: center;
  justify-content: start;
  cursor:pointer;
  background: transparent;
  outline: none;
  border: none;

  padding: 7px 15px;
  margin: 10px 0px;
  border-radius: 20px;
  transition: all 0.3s ease;
}

@media screen and (max-width: 900px) {
  .category-btn{
    margin: 10px;
  }
}

@media screen and (max-width:800px){
  .copyright{
    display:none !important;
  }
}

@media screen and (max-width: 600px) {
  .scroll-horizontal {
    overflow: auto !important;
  }

  .react-player {
    height: 45vh !important;
  }
  .search-bar{
    width:200px;
  }
}